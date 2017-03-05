/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EKMappingProtocol.h"

@class NSString, VK_ProfileDeclensionsModel;

__attribute__((visibility("hidden")))
@interface VK_ProfileBaseInfoModel : XXUnknownSuperclass <EKMappingProtocol> {
	BOOL _iFollow;
	BOOL _isUpdatingSubscriptionStatusInProcess;
	NSString* _avatar;
	NSString* _smallAvatar;
	NSString* _name;
	NSString* _profileLink;
	NSString* _userId;
	unsigned _gender;
	VK_ProfileDeclensionsModel* _declensions;
}
@property(retain, nonatomic) VK_ProfileDeclensionsModel* declensions;
@property(readonly, assign, nonatomic) BOOL isMyProfile;
@property(assign, nonatomic) unsigned gender;
@property(assign, nonatomic) BOOL iFollow;
@property(retain, nonatomic) NSString* userId;
@property(retain, nonatomic) NSString* profileLink;
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* smallAvatar;
@property(retain, nonatomic) NSString* avatar;
@property(assign, nonatomic) BOOL isUpdatingSubscriptionStatusInProcess;
+(id)objectMapping;
-(void).cxx_destruct;
-(id)formattedGenitiveNameStringWithBaseKey:(id)baseKey andMyProfileKey:(id)key;
-(void)unsubscribeWithCompletion:(id)completion;
-(void)subscribeWithCompletion:(id)completion;
@end

