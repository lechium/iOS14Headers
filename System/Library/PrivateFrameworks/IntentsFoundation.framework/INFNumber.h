/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsFoundation/INFSentenceToken.h>

@class NSString, NSNumber;

@interface INFNumber : INFSentenceToken {

	NSString* _identifier;
	NSNumber* _value;

}

@property (nonatomic,copy) NSNumber * value;              //@synthesize value=_value - In the implementation block
+(id)numberWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)identifier;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
-(id)dictionaryRepresentation;
-(id)stringForContext:(id)arg1 ;
-(id)contributingSentenceContext;
@end

