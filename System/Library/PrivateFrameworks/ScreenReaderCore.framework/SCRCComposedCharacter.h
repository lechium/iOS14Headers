/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCComposedCharacter : NSObject {

	unsigned long long _originalRepresentationLength;
	unsigned long long _normalFormDRepresentationLength;
	unsigned long long _normalFormKCRepresentationLength;
	int* _originalRepresentation;
	int* _normalFormDRepresentation;
	int* _normalFormKCRepresentation;
	long long _originalCombinedCharacterLength;
	CFStringRef _originalCombinedCharacter;

}
-(CFStringRef)originalString;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCharacter:(int)arg1 ;
-(int)charAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)originalLength;
-(id)_initWithCharacter:(int)arg1 ;
-(id)_initWithSimpleCharacter:(int)arg1 ;
-(id)_initWithComposedCharacter:(CFStringRef)arg1 ;
-(void)_buildFormKC;
-(int)formKCCharAtIndex:(unsigned long long)arg1 ;
-(void)_buildFormD;
-(BOOL)_formKCContaintsUpperCase;
-(unsigned long long)formKCLength;
-(id)initWithComposedCharacter:(CFStringRef)arg1 ;
-(BOOL)isEqualToUChar32:(int)arg1 ;
-(CFStringRef)copyUnicodeDescriptionString;
-(int)formDCharAtIndex:(unsigned long long)arg1 ;
-(int)originalFromCharAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsUpperCase;
-(unsigned long long)formDLength;
@end

