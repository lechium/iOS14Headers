/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString;

@interface SGNLPDetection : NSObject {

	NSString* _string;
	unsigned long long _category;
	NSRange _range;

}

@property (nonatomic,retain) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) NSRange range;                            //@synthesize range=_range - In the implementation block
-(NSRange)range;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(void)setRange:(NSRange)arg1 ;
@end
