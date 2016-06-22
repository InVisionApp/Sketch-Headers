//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, NSURLCredential, NSURLProtectionSpace, NSURLSession;

@interface MSCloudAPI : NSObject
{
    BOOL _isReachable;
    NSURLCredential *_credential;
    NSURLProtectionSpace *_protectionSpace;
    NSDictionary *_errorCodesByErrorString;
    NSURLSession *_urlSession;
    struct __SCNetworkReachability *_reachabilityRef;
    long long _reachabilityListenerCount;
}

@property(nonatomic) long long reachabilityListenerCount; // @synthesize reachabilityListenerCount=_reachabilityListenerCount;
@property(readonly, nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSDictionary *errorCodesByErrorString; // @synthesize errorCodesByErrorString=_errorCodesByErrorString;
@property(retain, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;
@property(readonly, nonatomic) BOOL isReachable; // @synthesize isReachable=_isReachable;
- (void).cxx_destruct;
- (void)endReachabilityNotifications;
- (void)beginReachabilityNotifications;
- (void)updateReachabilityUsingFlags:(unsigned int)arg1;
- (id)authValueForKey:(id)arg1;
- (void)saveAuthValue:(id)arg1 forKey:(id)arg2;
- (id)alertForError:(id)arg1;
@property(nonatomic) BOOL isUserVerified;
@property(readonly, nonatomic) NSString *authToken;
@property(readonly, nonatomic) NSString *userID;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
- (void)credentialDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) BOOL isLoggedIn;
- (void)logout;
- (id)hmacsha1:(id)arg1 key:(id)arg2;
- (id)signingForRequest:(id)arg1 authToken:(id)arg2;
- (id)signToken;
- (id)urlRequestWithMethod:(id)arg1 url:(id)arg2 parameters:(id)arg3 authToken:(id)arg4;
- (void)processAPIRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)errorCodeFromErrorMessage:(id)arg1;
- (long long)currentPlatform;
- (id)URLWithEndpoint:(id)arg1;
@property(readonly) NSURL *baseURL;
- (void)dealloc;
- (id)init;

@end

