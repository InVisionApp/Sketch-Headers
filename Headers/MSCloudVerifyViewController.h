//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCloudPreferenceViewController.h"

@class NSString;

@interface MSCloudVerifyViewController : MSCloudPreferenceViewController
{
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)windowDidBecomeKeyNotification:(id)arg1;
- (void)applicationDidOpenURL:(id)arg1;
- (void)logout:(id)arg1;
- (void)updateAccountVerification;
- (void)viewWillAppear;
- (void)dealloc;
- (void)viewDidLoad;

@end

