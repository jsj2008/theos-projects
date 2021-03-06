/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VisibleObjectsTrackerBehavior.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class UIView, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface VisibleObjectsTrackerUITableViewCell : XXUnknownSuperclass <VisibleObjectsTrackerBehavior> {
	UITableView* _tableView;
}
@property(readonly, assign, nonatomic) UIView* view;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) UITableView* tableView;
+(id)tableView:(id)view;
-(void).cxx_destruct;
-(CGRect)rectForObject:(id)object;
-(id)objectsInRect:(CGRect)rect;
-(CGRect)trackingBounds;
-(id)initWithTableView:(id)tableView;
@end

