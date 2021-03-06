/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSApplication/TSAPdfTaggerContext.h>

@interface TSAPdfTaggerSecondaryTextRunContext : TSAPdfTaggerContext {

	NSRange _charRange;
	NSRange _baseTextRange;

}

@property (nonatomic,readonly) NSRange charRange;                  //@synthesize charRange=_charRange - In the implementation block
@property (nonatomic,readonly) NSRange baseTextRange;              //@synthesize baseTextRange=_baseTextRange - In the implementation block
-(NSRange)charRange;
-(id)initWithStateOfTagger:(id)arg1 charRange:(NSRange)arg2 baseTextRange:(NSRange)arg3 ;
-(NSRange)baseTextRange;
@end

