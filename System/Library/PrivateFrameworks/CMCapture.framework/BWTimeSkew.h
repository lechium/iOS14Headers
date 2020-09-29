/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:24 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWTimeSkew : NSObject {

	SCD_Struct_BW8 _native;
	SCD_Struct_BW8 _original;
	SCD_Struct_BW8 _adjusted;
	BOOL _isBracketFrame;
	BOOL _isSISFrame;
	BOOL _isStartOfDiscontinuity;

}

@property (nonatomic,readonly) SCD_Struct_BW8 native;                  //@synthesize native=_native - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 original;                //@synthesize original=_original - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 adjusted;                  //@synthesize adjusted=_adjusted - In the implementation block
@property (nonatomic,readonly) BOOL isBracketFrame;                    //@synthesize isBracketFrame=_isBracketFrame - In the implementation block
@property (nonatomic,readonly) BOOL isSISFrame;                        //@synthesize isSISFrame=_isSISFrame - In the implementation block
@property (assign,nonatomic) BOOL isStartOfDiscontinuity;              //@synthesize isStartOfDiscontinuity=_isStartOfDiscontinuity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNativeTime:(SCD_Struct_BW8)arg1 originalTime:(SCD_Struct_BW8)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(SCD_Struct_BW8)original;
-(BOOL)isStartOfDiscontinuity;
-(SCD_Struct_BW8)adjusted;
-(BOOL)isSISFrame;
-(void)setAdjusted:(SCD_Struct_BW8)arg1 ;
-(void)setIsStartOfDiscontinuity:(BOOL)arg1 ;
-(SCD_Struct_BW8)native;
-(id)description;
-(BOOL)isBracketFrame;
@end
