/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_PagedRequestBase.h"

@class VK_VKFriendsResponse, NSString;

__attribute__((visibility("hidden")))
@interface VK_UserExportSubscriptionsRequest : VK_PagedRequestBase {
	unsigned _type;
	NSString* _userId;
}
@property(retain, nonatomic) NSString* userId;
@property(assign, nonatomic) unsigned type;
@property(readonly, assign, nonatomic) VK_VKFriendsResponse* response;
-(void).cxx_destruct;
-(BOOL)internalCachingSupported;
-(id)internalResponseModelMapping;
-(void)internalInitRequestParams:(id)params;
-(id)internalBuildRequestCommand;
@end

