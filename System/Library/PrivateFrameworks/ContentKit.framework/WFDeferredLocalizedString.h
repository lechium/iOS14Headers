/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface WFDeferredLocalizedString : NSString {

	NSString* _localizedValue;
	NSString* _backingStore;

}

@property (nonatomic,copy) NSString * backingStore;                //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,copy) NSString * localizedValue;              //@synthesize localizedValue=_localizedValue - In the implementation block
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)length;
-(NSString *)localizedValue;
-(void)setLocalizedValue:(NSString *)arg1 ;
-(void)setBackingStore:(NSString *)arg1 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(NSString *)backingStore;
@end
