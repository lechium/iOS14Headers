/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDiffableDataSourceSnapshot;


@protocol NTKComplicationPickerListProvider <NSObject>
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * pickerListDataSourceSnapshot; 
@property (nonatomic,readonly) id<NTKComplicationItem> pickerSelectedItem; 
@property (nonatomic,readonly) BOOL pickerListProviderSlotIsRich; 
@required
-(BOOL)pickerListProviderSlotIsRich;
-(void)addListProviderListener:(id)arg1;
-(void)removeListProviderListener:(id)arg1;
-(NSDiffableDataSourceSnapshot *)pickerListDataSourceSnapshot;
-(id<NTKComplicationItem>)pickerSelectedItem;

@end

