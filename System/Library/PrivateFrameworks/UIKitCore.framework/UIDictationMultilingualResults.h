/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIDictationMultilingualResults : NSObject {

	NSArray* _phrases;
	NSString* _dominantLanguage;

}

@property (nonatomic,copy) NSArray * phrases;                        //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy) NSString * dominantLanguage;              //@synthesize dominantLanguage=_dominantLanguage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)phrases;
-(NSString *)dominantLanguage;
-(id)initWithPhrases:(id)arg1 dominantLanguage:(id)arg2 ;
-(void)setPhrases:(NSArray *)arg1 ;
-(void)setDominantLanguage:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
