//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OAuth.framework/OAuth
// UUID: C7891ACF-5D6A-3E9E-A459-90AF6294DDD8
//
//                           Arch: x86_64
//                Current version: 25.0.0
//          Compatibility version: 1.0.0
//                 Source version: 28.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol OAuthSigner
+ (NSString *)signatureForText:(NSString *)arg1 withKey:(NSString *)arg2;
@end

@interface NSString (OAURLEncode)
- (id)urlEncodedString;
@end

@interface OACredential : NSObject
{
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
}

@property(copy, nonatomic) NSString *oauthTokenSecret; // @synthesize oauthTokenSecret=_oauthTokenSecret;
@property(copy, nonatomic) NSString *oauthToken; // @synthesize oauthToken=_oauthToken;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
- (id)signingKey;
- (void)dealloc;

@end

@interface OAHMAC_SHA1Signer : NSObject <OAuthSigner>
{
}

+ (id)signatureForText:(id)arg1 withKey:(id)arg2;

@end

@interface OAPlainTextSigner : NSObject <OAuthSigner>
{
}

+ (id)signatureForText:(id)arg1 withKey:(id)arg2;

@end

@interface OAURLRequestSigner : NSObject
{
    OACredential *_credential;
    int _signatureMethod;
}

@property(nonatomic) int signatureMethod; // @synthesize signatureMethod=_signatureMethod;
- (id)signedURLRequestWithRequest:(id)arg1;
- (id)signedURLRequestWithRequest:(id)arg1 applicationID:(id)arg2 timestamp:(id)arg3;
- (id)applyApplicationID:(id)arg1 toRequest:(id)arg2 containsMultiPartData:(_Bool)arg3;
- (id)oauthAuthorizationHeaderWithSignature:(id)arg1 nonce:(id)arg2 timestamp:(id)arg3;
- (id)oauthParametersWithNonce:(id)arg1 timeStamp:(id)arg2;
- (id)timestamp:(id)arg1;
- (id)oauthNonce;
- (Class)signer;
- (id)signatureMethodString;
- (void)dealloc;
- (id)initWithCredential:(id)arg1;

@end
