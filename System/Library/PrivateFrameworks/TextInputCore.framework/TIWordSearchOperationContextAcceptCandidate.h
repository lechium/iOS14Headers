/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraEnvironment;

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {

	void* _mecabraCandidate;
	BOOL _partialCandidate;
	BOOL _prediction;
	TIMecabraEnvironment* _mecabraEnvironment;

}

@property (nonatomic,retain) TIMecabraEnvironment * mecabraEnvironment;                    //@synthesize mecabraEnvironment=_mecabraEnvironment - In the implementation block
@property (assign,getter=isPartialCandidate,nonatomic) BOOL partialCandidate;              //@synthesize partialCandidate=_partialCandidate - In the implementation block
@property (assign,getter=isPrediction,nonatomic) BOOL prediction;                          //@synthesize prediction=_prediction - In the implementation block
-(void)cancel;
-(void)perform;
-(BOOL)isPartialCandidate;
-(void)dealloc;
-(void)setPartialCandidate:(BOOL)arg1 ;
-(BOOL)isPrediction;
-(void)setPrediction:(BOOL)arg1 ;
-(id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(BOOL)arg3 isPrediction:(BOOL)arg4 ;
-(TIMecabraEnvironment *)mecabraEnvironment;
-(void)setMecabraEnvironment:(TIMecabraEnvironment *)arg1 ;
@end
