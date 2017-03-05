/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VK_Music-Structs.h"

@class NSDictionary, NSString, FABIcon;

@interface FABApplicationIdentiferModel : XXUnknownSuperclass {
	NSDictionary* _architectureUUIDMap;
	NSString* _installID;
	FABIcon* _icon;
	NSString* _bundleIdentifier;
	NSString* _instanceIdentifier;
	PLCrashHostInfoVersion _builtSDK;
	PLCrashHostInfoVersion _minimumSDK;
}
@property(readonly, assign, nonatomic) NSString* bundleIdentifier;
@property(readonly, assign, nonatomic) FABIcon* icon;
@property(readonly, assign, nonatomic) NSString* installID;
@property(readonly, assign, nonatomic) NSString* minimumSDKString;
@property(readonly, assign, nonatomic) NSString* builtSDKString;
@property(readonly, assign, nonatomic) PLCrashHostInfoVersion minimumSDK;
@property(readonly, assign, nonatomic) PLCrashHostInfoVersion builtSDK;
@property(copy, nonatomic) NSString* instanceIdentifier;
@property(copy, nonatomic) NSDictionary* architectureUUIDMap;
-(void).cxx_destruct;
-(BOOL)computeInstanceIdentifier;
-(BOOL)computeExecutableInfo;
-(id)initWithInstallID:(id)installID;
@end

