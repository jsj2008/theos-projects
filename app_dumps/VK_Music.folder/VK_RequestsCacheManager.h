/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VK_URLCache;

__attribute__((visibility("hidden")))
@interface VK_RequestsCacheManager : XXUnknownSuperclass {
	VK_URLCache* _urlCache;
}
@property(retain, nonatomic) VK_URLCache* urlCache;
+(id)shared;
-(void).cxx_destruct;
-(void)clearCache;
-(id)cachedResponseForRequestOperation:(id)requestOperation;
-(void)storeCacheForRequestOperation:(id)requestOperation;
-(void)disableNativeCachingForRequestOperation:(id)requestOperation;
-(id)modifiedRequest:(id)request;
-(id)queryFromQueryItems:(id)queryItems;
-(id)queryItemsFromQuery:(id)query;
-(id)modifiedCachedResponse:(id)response;
-(void)setup;
-(id)init;
@end

