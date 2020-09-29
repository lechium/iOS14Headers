/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableSelectedItemsStack.h>

@class NSArray, NSString;

@interface PXSelectedItemsStack : PXObservable <PXMutableSelectedItemsStack> {

	long long _depth;
	NSArray* _topItems;
	NSArray* _topItemReferences;

}

@property (nonatomic,copy) NSArray * topItemReferences;              //@synthesize topItemReferences=_topItemReferences - In the implementation block
@property (nonatomic,copy) NSArray * topItems;                       //@synthesize topItems=_topItems - In the implementation block
@property (nonatomic,readonly) long long depth;                      //@synthesize depth=_depth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)depth;
-(void)setTopItemReferences:(NSArray *)arg1 ;
-(id)initWithDepth:(long long)arg1 ;
-(id)mutableChangeObject;
-(NSArray *)topItemReferences;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)init;
-(void)setTopItems:(NSArray *)arg1 ;
-(NSArray *)topItems;
-(void)updateWithSelectedItemsSnapshot:(id)arg1 ;
@end
