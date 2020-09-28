/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class NSString;

@interface SFSiriWordTimingInfo : NSObject {

	NSString* _localizedText;
	double _timeOffset;
	NSString* _wordID;
	NSRange _textRange;

}

@property (nonatomic,copy) NSString * localizedText;              //@synthesize localizedText=_localizedText - In the implementation block
@property (assign,nonatomic) double timeOffset;                   //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) NSRange textRange;                   //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,copy) NSString * wordID;                     //@synthesize wordID=_wordID - In the implementation block
+(id)serializableArrayWithTimingInfoArray:(id)arg1 ;
+(id)timingInfoArrayWithSerializableArray:(id)arg1 ;
-(NSString *)localizedText;
-(void)setLocalizedText:(NSString *)arg1 ;
-(NSString *)wordID;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(void)setWordID:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
@end
