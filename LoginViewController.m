//
//  LoginViewController.m
//  Reading
//
//  Created by Cyrilshanway on 11/12/14.
//  Copyright (c) 2014 Cyrilshanway. All rights reserved.
//

#import "LoginViewController.h"
#import <Parse/Parse.h>

@interface LoginViewController ()
@property (weak, nonatomic) IBOutlet UITextField *userNameTextField;
@property (weak, nonatomic) IBOutlet UITextField *pwdTextField;

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)loginBurronPressed:(id)sender {
    [PFUser logInWithUsernameInBackground:self.userNameTextField.text
                                 password:self.pwdTextField.text
                                    block:^(PFUser *user, NSError *error) {
                                        if (user) {
                                            // Do stuff after successful login.
                                            NSLog(@"successful");
                                            
                                            // 直接跳到下一頁
                                            [self performSegueWithIdentifier:@"showMyBooks" sender:nil];
                                        } else {
                                            // The login failed. Check error to see why.
                                            NSLog(@"failed");
                                            
                                            UIAlertController *alert = [UIAlertController
                                                                        alertControllerWithTitle:@"OOPs"
                                                                        message:@"查無此人"
                                                                        preferredStyle:(UIAlertControllerStyleAlert)];
                                            
                                            UIAlertAction *ok = [UIAlertAction actionWithTitle:@"OK"
                                                                                         style:UIAlertActionStyleDefault
                                                                                       handler:^(UIAlertAction *action){
                                                                                           [alert dismissViewControllerAnimated:YES
                                                                                                                     completion:nil];
                                                                                       }];
                                            
                                            UIAlertAction *cancel = [UIAlertAction actionWithTitle:@"cancel"
                                                                                             style:UIAlertActionStyleDefault
                                                                                           handler:^(UIAlertAction *action){
                                                                                               [alert dismissViewControllerAnimated:YES
                                                                                                                         completion:nil];
                                                                                           }];
                                            
                                            [alert addAction:ok];
                                            [alert addAction:cancel];
                                            
                                            
                                            [self presentViewController:alert animated:YES completion:nil];
                                            
                                            
                                        }
                                    }];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
