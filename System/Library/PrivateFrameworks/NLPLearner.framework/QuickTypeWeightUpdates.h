/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSNumber, NSString;

@interface QuickTypeWeightUpdates : NSObject {

	NSData* _weightUpdates;
	NSNumber* _l2Norm;
	NSNumber* _maxNorm;
	NSString* _privacyDiagnosticReport;
	NSString* _weightUpdatesDiagnosticReport;

}

@property (nonatomic,retain) NSData * weightUpdates;                              //@synthesize weightUpdates=_weightUpdates - In the implementation block
@property (nonatomic,copy) NSNumber * l2Norm;                                     //@synthesize l2Norm=_l2Norm - In the implementation block
@property (nonatomic,copy) NSNumber * maxNorm;                                    //@synthesize maxNorm=_maxNorm - In the implementation block
@property (nonatomic,copy) NSString * privacyDiagnosticReport;                    //@synthesize privacyDiagnosticReport=_privacyDiagnosticReport - In the implementation block
@property (nonatomic,copy) NSString * weightUpdatesDiagnosticReport;              //@synthesize weightUpdatesDiagnosticReport=_weightUpdatesDiagnosticReport - In the implementation block
-(NSNumber *)l2Norm;
-(NSNumber *)maxNorm;
-(NSData *)weightUpdates;
-(NSString *)privacyDiagnosticReport;
-(NSString *)weightUpdatesDiagnosticReport;
-(void)setWeightUpdates:(NSData *)arg1 ;
-(void)setL2Norm:(NSNumber *)arg1 ;
-(void)setMaxNorm:(NSNumber *)arg1 ;
-(void)setPrivacyDiagnosticReport:(NSString *)arg1 ;
-(void)setWeightUpdatesDiagnosticReport:(NSString *)arg1 ;
@end
