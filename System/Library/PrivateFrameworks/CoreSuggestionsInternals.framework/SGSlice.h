/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@interface SGSlice : NSObject {

	SCD_Struct_SG11 _type;
	unsigned long long _start;
	unsigned long long _end;

}

@property (nonatomic,readonly) SCD_Struct_SG11 type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) unsigned long long end;                //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSRange range; 
+(id)sliceWithType:(SCD_Struct_SG11)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
+(id)sliceWithType:(SCD_Struct_SG11)arg1 range:(NSRange)arg2 ;
-(NSRange)range;
-(unsigned long long)end;
-(unsigned long long)start;
-(long long)compare:(id)arg1 ;
-(SCD_Struct_SG11)type;
-(id)description;
-(id)initWithType:(SCD_Struct_SG11)arg1 start:(unsigned long long)arg2 end:(unsigned long long)arg3 ;
-(id)initWithType:(SCD_Struct_SG11)arg1 range:(NSRange)arg2 ;
@end

