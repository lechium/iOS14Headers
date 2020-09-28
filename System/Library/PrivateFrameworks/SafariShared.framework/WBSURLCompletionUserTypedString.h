/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {

	NSString* _string;
	const unsigned short* _unichars;
	const char* _chars;
	int _length;
	BOOL _containsAnySpaces;
	BOOL _ownsUnichars;
	BOOL _ownsChars;

}

@property (nonatomic,readonly) NSString * normalizedString;              //@synthesize string=_string - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)normalizedString;
-(id)init;
-(id)initWithString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
