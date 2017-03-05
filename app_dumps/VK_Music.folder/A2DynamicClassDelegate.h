/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "A2DynamicDelegate.h"


@interface A2DynamicClassDelegate : A2DynamicDelegate {
	Class _proxiedClass;
}
@property(retain, nonatomic) Class proxiedClass;
-(void).cxx_destruct;
-(void)removeBlockImplementationForClassMethod:(SEL)classMethod;
-(void)implementClassMethod:(SEL)method withBlock:(id)block;
-(id)blockImplementationForClassMethod:(SEL)classMethod;
-(void)forwardInvocation:(id)invocation;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)selector;
-(Class)class;
-(BOOL)respondsToSelector:(SEL)selector;
-(BOOL)isEqual:(id)equal;
-(BOOL)isClassProxy;
@end

