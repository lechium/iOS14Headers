/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <libobjc.A.dylib/TSDWrappable.h>

@class TSDWrapPolygon, TSDBezierPath, NSMutableArray, NSString;

@interface SXContainerLayout : TSDContainerLayout <TSDWrappable> {

	TSDWrapPolygon* mCachedWrapPolygon;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;
	NSMutableArray* _oldchildLayouts;

}

@property (nonatomic,retain) NSMutableArray * oldchildLayouts;              //@synthesize oldchildLayouts=_oldchildLayouts - In the implementation block
@property (nonatomic,readonly) BOOL hasAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(BOOL)hasAlpha;
-(void)dealloc;
-(void)dragBy:(CGPoint)arg1 ;
-(void)setGeometry:(id)arg1 ;
-(int)wrapType;
-(id)wrapPolygon;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
-(void)updateChildrenFromInfo;
-(BOOL)isHTMLWrap;
-(int)wrapDirection;
-(int)wrapFitType;
-(id)additionalLayouts;
-(id)childrenForLayout;
-(void)childLayoutCreated:(id)arg1 ;
-(id)i_exteriorTextWrap;
-(id)i_computeWrapPath;
-(id)i_wrapPath;
-(void)invalidateParentForWrap;
-(void)invalidateExteriorWrap;
-(void)processChangedProperty:(int)arg1 ;
-(void)parentDidChange;
-(void)i_invalidateWrap;
-(id)i_computeWrapPathClosed:(BOOL)arg1 ;
-(id)i_externalWrapPath;
-(BOOL)allowsConnections;
-(BOOL)supportsInspectorPositioning;
-(NSMutableArray *)oldchildLayouts;
-(void)setOldchildLayouts:(NSMutableArray *)arg1 ;
@end
