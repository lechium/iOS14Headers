/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakObjectValue : NSValue {

	void* _value;
	id _object;
	BOOL _useFallback;

}
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)nonretainedObjectValue;
-(void)dealloc;
-(BOOL)isEqualToValue:(id)arg1 ;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)weakObjectValue;
@end
