/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXSelectedItemsSnapshot.h>

@protocol PXBrowserSelectionSnapshot;
@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot> {

	id<PXBrowserSelectionSnapshot> _browserSelectionSnapshot;

}

@property (nonatomic,readonly) id<PXBrowserSelectionSnapshot> browserSelectionSnapshot;              //@synthesize browserSelectionSnapshot=_browserSelectionSnapshot - In the implementation block
@property (nonatomic,readonly) long long count; 
-(id)init;
-(id)initWithBrowserSelectionSnapshot:(id)arg1 ;
-(id)itemReferenceAtIndex:(long long)arg1 ;
-(id)containsItemReference:(id)arg1 ;
-(id)itemForItemReference:(id)arg1 ;
-(id<PXBrowserSelectionSnapshot>)browserSelectionSnapshot;
-(long long)count;
@end

