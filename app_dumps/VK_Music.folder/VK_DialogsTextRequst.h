/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_ApiRequest.h"

@class VK_DialogsTextResponse;

__attribute__((visibility("hidden")))
@interface VK_DialogsTextRequst : VK_ApiRequest {
}
@property(readonly, assign, nonatomic) VK_DialogsTextResponse* response;
-(id)internalResponseModelMapping;
-(id)internalBuildRequestCommand;
-(BOOL)internalCachingSupported;
@end
