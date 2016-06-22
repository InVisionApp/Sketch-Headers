//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudPreferenceViewController.h"

@class NSButton, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSTimer;

@interface MSCloudRegisterViewController : MSCloudPreferenceViewController
{
    NSTextField *_emailTextField;
    NSTextField *_passwordTextField;
    NSTextField *_confirmPasswordTextField;
    NSButton *_confirmButton;
    NSButton *_newsLetterButton;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_nameTextField;
    NSLayoutConstraint *_interPasswordSpaceConstraint;
    NSTextField *_passwordErrorField;
    NSTimer *_passwordValidationTimer;
}

@property(retain, nonatomic) NSTimer *passwordValidationTimer; // @synthesize passwordValidationTimer=_passwordValidationTimer;
@property(retain, nonatomic) NSTextField *passwordErrorField; // @synthesize passwordErrorField=_passwordErrorField;
@property(retain, nonatomic) NSLayoutConstraint *interPasswordSpaceConstraint; // @synthesize interPasswordSpaceConstraint=_interPasswordSpaceConstraint;
@property(retain, nonatomic) NSTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSButton *newsLetterButton; // @synthesize newsLetterButton=_newsLetterButton;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NSTextField *confirmPasswordTextField; // @synthesize confirmPasswordTextField=_confirmPasswordTextField;
@property(retain, nonatomic) NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) NSTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
- (void).cxx_destruct;
- (void)userDidLogout;
- (void)userDidLogin;
- (void)registerNewsletterWithEmail:(id)arg1;
- (void)registerAccountConfirm:(id)arg1;
- (void)viewTermsOfService:(id)arg1;
- (void)applyUsername:(id)arg1 password:(id)arg2;
- (void)enableRegistrationFields:(BOOL)arg1;
- (void)validatePassword;
- (BOOL)shouldHidePasswordErrorField;
@property(readonly, nonatomic) NSString *passwordsErrorText;
- (void)validateInput;
- (void)controlTextDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidAppear;
- (void)dealloc;
- (void)viewDidLoad;

@end

