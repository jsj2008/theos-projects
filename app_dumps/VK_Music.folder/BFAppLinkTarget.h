/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString;

@interface BFAppLinkTarget : XXUnknownSuperclass {
	NSURL* _URL;
	NSString* _appStoreId;
	NSString* _appName;
}
@property(copy, nonatomic) NSString* appName;
@property(copy, nonatomic) NSString* appStoreId;
@property(retain, nonatomic) NSURL* URL;
+(id)appLinkTargetWithURL:(id)url appStoreId:(id)anId appName:(id)name;
-(void).cxx_destruct;
@end

