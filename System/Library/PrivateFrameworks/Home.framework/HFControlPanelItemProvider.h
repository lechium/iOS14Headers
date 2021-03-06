/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol NSCopying, HFCharacteristicValueSource;
@class HFItem, NSSet;

@interface HFControlPanelItemProvider : HFItemProvider {

	HFItem*<NSCopying> _item;
	id<HFCharacteristicValueSource> _valueSource;
	/*^block*/id _filter;
	NSSet* _controlPanelItems;

}

@property (nonatomic,copy) NSSet * controlPanelItems;                                    //@synthesize controlPanelItems=_controlPanelItems - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<NSCopying> item;                             //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,copy) id filter;                                                    //@synthesize filter=_filter - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)items;
-(id)filter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItem:(id)arg1 valueSource:(id)arg2 ;
-(NSSet *)controlPanelItems;
-(void)setControlPanelItems:(NSSet *)arg1 ;
-(/*^block*/id)controlPanelItemComparator;
-(HFItem*<NSCopying>)item;
-(id)init;
-(void)setFilter:(id)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(id)reloadItems;
@end

