/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKObject.h"

@class NSString;

@interface VKApiBase : VKObject {
	NSString* _methodGroup;
}
-(void).cxx_destruct;
-(id)prepareRequestWithMethodName:(id)methodName parameters:(id)parameters modelClass:(Class)aClass;
-(id)prepareRequestWithMethodName:(id)methodName parameters:(id)parameters;
-(void)setMethodGroup:(id)group;
-(id)getMethodGroup;
-(id)init;
@end

