/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_AuthorizedApiRequest.h"

@class VK_FavoriteActionResponse;

__attribute__((visibility("hidden")))
@interface VK_FavoriteRequestBase : VK_AuthorizedApiRequest {
}
@property(readonly, assign, nonatomic) VK_FavoriteActionResponse* response;
-(id)internalResponseModelMapping;
-(BOOL)internalCachingSupported;
@end

