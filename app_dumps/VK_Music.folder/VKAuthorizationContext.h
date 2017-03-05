/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKObject.h"

@class NSString, NSArray;

@interface VKAuthorizationContext : VKObject {
	BOOL _revoke;
	BOOL _usingVkApp;
	NSString* _clientId;
	NSString* _displayType;
	NSArray* _scope;
	NSString* _authPrefix;
	NSString* _redirectUri;
	NSString* _responseType;
}
@property(assign, nonatomic) BOOL usingVkApp;
@property(assign, nonatomic) BOOL revoke;
@property(retain, nonatomic) NSArray* scope;
@property(retain, nonatomic) NSString* responseType;
@property(retain, nonatomic) NSString* displayType;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) NSString* redirectUri;
@property(retain, nonatomic) NSString* authPrefix;
+(id)contextWithAuthType:(int)authType clientId:(id)anId displayType:(id)type scope:(id)scope revoke:(BOOL)revoke;
-(void).cxx_destruct;
@end

