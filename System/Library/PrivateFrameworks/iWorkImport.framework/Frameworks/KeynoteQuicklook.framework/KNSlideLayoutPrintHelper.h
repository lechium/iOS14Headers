/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KNSlideLayoutPrintHelperDataSource;
@class NSArray, KNPrintSegment, KNRenderingExporter, KNSlideNode;

@interface KNSlideLayoutPrintHelper : NSObject {

	NSArray* _segments;
	KNPrintSegment* _currentSegment;
	KNRenderingExporter* _renderingExporter;
	id<KNSlideLayoutPrintHelperDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<KNSlideLayoutPrintHelperDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) BOOL shouldDrawSlide; 
@property (nonatomic,readonly) KNSlideNode * slideNode; 
@property (nonatomic,readonly) unsigned long long buildIndex; 
@property (nonatomic,readonly) unsigned long long notesIndex; 
@property (nonatomic,readonly) unsigned long long notesPageIndex; 
@property (nonatomic,readonly) long long commentsPageIndex; 
-(void)setDataSource:(id<KNSlideLayoutPrintHelperDataSource>)arg1 ;
-(KNSlideNode *)slideNode;
-(void)resetPage;
-(id<KNSlideLayoutPrintHelperDataSource>)dataSource;
-(unsigned long long)pageCount;
-(id)initWithRenderingExporter:(id)arg1 ;
-(unsigned long long)buildIndex;
-(BOOL)incrementPage;
-(unsigned long long)notesIndex;
-(void)setCurrentSlideNode:(id)arg1 ;
-(long long)commentsPageIndex;
-(BOOL)shouldDrawSlide;
-(unsigned long long)notesPageIndex;
-(void)p_segmentSlideNodes;
-(id)p_segmentsForSlideNode:(id)arg1 ;
@end

