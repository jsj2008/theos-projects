/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionAdd.h"

@class VKFriendList;

__attribute__((visibility("hidden")))
@interface ModelActionAddFriendList : ModelActionAdd {
}
@property(retain, nonatomic) VKFriendList* target;
+(int)domainType;
-(void)actionHandleSuccessForData:(id)data context:(id)context;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end
