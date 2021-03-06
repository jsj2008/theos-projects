/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSObject.h"
#import "TapContext.h"

@class NSString, Component5RenderContext;
@protocol VKMNavDelegate;

@protocol TapContext <NSObject>
-(id)renderContext;
-(id)navDelegate;
-(id)sender;
@end

__attribute__((visibility("hidden")))
@interface TapContext : XXUnknownSuperclass <TapContext> {
	id _sender;
	Component5RenderContext* _renderContext;
	id<VKMNavDelegate> _navDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<VKMNavDelegate> navDelegate;
@property(assign, nonatomic) __weak Component5RenderContext* renderContext;
@property(retain, nonatomic) id sender;
-(void).cxx_destruct;
@end

