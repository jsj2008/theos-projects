/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_ApiResponse.h"

@class VK_AuthorizationModel;

__attribute__((visibility("hidden")))
@interface VK_AuthTokenResponse : VK_ApiResponse {
	VK_AuthorizationModel* _data;
}
@property(retain, nonatomic) VK_AuthorizationModel* data;
+(void)internalInitMapping:(id)mapping;
-(void).cxx_destruct;
@end

