/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VK_ImageLoadingOperation : XXUnknownSuperclass {
	BOOL _refreshCache;
	BOOL _memoryOnlyCache;
}
@property(assign, nonatomic) BOOL memoryOnlyCache;
@property(assign, nonatomic) BOOL refreshCache;
-(void)cancel;
-(void)loadImageWithId:(id)anId withCompletion:(id)completion;
@end

