/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSArray, NSMutableArray, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface SegmentedTableViewHeaderFooterView : XXUnknownSuperclass {
	BOOL _emulateSeparator;
	UISegmentedControl* _segmentedControl;
	NSMutableArray* _descriptors;
	UIView* _customSeparator;
}
@property(assign, nonatomic, getter=isSelectorEnabled) BOOL selectorEnabled;
@property(assign, nonatomic) BOOL emulateSeparator;
@property(readonly, copy, nonatomic) NSArray* sectionDescriptors;
@property(readonly, retain, nonatomic) UIView* customSeparator;
@property(readonly, copy, nonatomic) NSMutableArray* descriptors;
@property(readonly, retain, nonatomic) UISegmentedControl* segmentedControl;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)removeAllSectionDescriptors;
-(void)selectSectionDescriptorAtIndex:(unsigned)index;
-(void)addSectionDescriptors:(id)descriptors;
-(void)segmentToggled:(id)toggled;
-(id)createSubviews;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end

