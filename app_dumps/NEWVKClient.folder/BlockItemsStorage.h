/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BlockItemsStorage : XXUnknownSuperclass {
	NSMutableArray* _mItems;
}
@property(readonly, assign, nonatomic) NSArray* items;
-(void).cxx_destruct;
-(void)clear;
-(void)addRecentTrend:(id)trend;
-(void)addItem:(id)item toTop:(BOOL)top;
-(id)initWithItems:(id)items;
@end
