/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSearchReference.h>

@protocol TSDCanvasSelection, TSKAnnotation;
@class NSArray, TSDDrawableInfo, TSKDocumentRoot, NSString;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference> {

	id<TSDCanvasSelection> mCanvasSelection;
	TSDDrawableInfo* mDrawableInfo;
	TSKDocumentRoot* mDocumentRoot;
	BOOL mAutohideHighlight;
	BOOL mPulseHighlight;
	NSArray* mFindHighlights;
	id<TSKAnnotation> mAnnotation;
	CGPoint mSearchReferencePoint;

}

@property (assign,nonatomic) CGPoint searchReferencePoint; 
@property (nonatomic,retain) NSArray * findHighlights; 
@property (assign,nonatomic) BOOL pulseHighlight; 
@property (assign,nonatomic) BOOL autohideHighlight; 
@property (nonatomic,retain) id<TSKAnnotation> annotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchReferenceWithDrawableInfo:(id)arg1 ;
-(id<TSKAnnotation>)annotation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)model;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAnnotation:(id<TSKAnnotation>)arg1 ;
-(id)selection;
-(NSString *)description;
-(CGPoint)searchReferencePoint;
-(void)setSearchReferencePoint:(CGPoint)arg1 ;
-(id)initWithDrawableInfo:(id)arg1 ;
-(id)drawableInfo;
-(id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3 ;
-(id)searchReferenceStart;
-(id)searchReferenceEnd;
-(BOOL)isReplaceable;
-(NSArray *)findHighlights;
-(void)setFindHighlights:(NSArray *)arg1 ;
-(BOOL)pulseHighlight;
-(void)setPulseHighlight:(BOOL)arg1 ;
-(BOOL)autohideHighlight;
-(void)setAutohideHighlight:(BOOL)arg1 ;
@end

