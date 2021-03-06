/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AlgosScoreCombiner : NSObject {

	void* combinerData;
	int _debug;

}

@property (assign,nonatomic) int debug;              //@synthesize debug=_debug - In the implementation block
+(id)combiner;
-(int)debug;
-(void)dealloc;
-(id)init;
-(void)setDebug:(int)arg1 ;
-(void)clearScores;
-(double)signedMeanSquaredDeviation;
-(void)addScore:(double)arg1 weight:(double)arg2 type:(id)arg3 label:(id)arg4 ;
-(id)scoreScores:(id)arg1 ;
@end

