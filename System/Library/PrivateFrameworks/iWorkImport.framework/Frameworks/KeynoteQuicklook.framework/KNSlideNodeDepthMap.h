/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface KNSlideNodeDepthMap : NSObject {

	NSArray* _slideNodes;
	NSArray* _depthsOfSlideNodes;

}

@property (nonatomic,readonly) NSArray * slideNodes;                      //@synthesize slideNodes=_slideNodes - In the implementation block
@property (nonatomic,readonly) NSArray * depthsOfSlideNodes;              //@synthesize depthsOfSlideNodes=_depthsOfSlideNodes - In the implementation block
-(NSArray *)slideNodes;
-(id)initWithSlideNodes:(id)arg1 depths:(id)arg2 ;
-(void)enumerateSlideNodesAndDepthsUsingBlock:(/*^block*/id)arg1 ;
-(NSArray *)depthsOfSlideNodes;
@end
