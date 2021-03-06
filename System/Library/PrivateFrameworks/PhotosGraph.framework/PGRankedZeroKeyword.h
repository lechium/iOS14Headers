/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject {

	NSDictionary* _zeroKeyword;
	double _score;

}

@property (readonly) NSDictionary * zeroKeyword;              //@synthesize zeroKeyword=_zeroKeyword - In the implementation block
@property (readonly) double score;                            //@synthesize score=_score - In the implementation block
-(double)score;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)zeroKeyword;
-(id)initWithKeyword:(id)arg1 score:(double)arg2 ;
@end

