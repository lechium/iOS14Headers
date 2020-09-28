/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout {

	NSMutableDictionary* _frameCache;
	NSMutableDictionary* _sectionInsetCache;

}

@property (nonatomic,retain) NSMutableDictionary * frameCache;                     //@synthesize frameCache=_frameCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sectionInsetCache;              //@synthesize sectionInsetCache=_sectionInsetCache - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)invalidateLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1 ;
-(id)init;
-(NSMutableDictionary *)frameCache;
-(UIEdgeInsets)sectionInsetForItemAtIndex:(long long)arg1 ;
-(id)leftAlignedAttributesForAttribute:(id)arg1 sectionInset:(UIEdgeInsets)arg2 ;
-(void)setFrameCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionInsetCache;
-(void)setSectionInsetCache:(NSMutableDictionary *)arg1 ;
@end
