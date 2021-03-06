/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {

	NSString* mName;
	NSMutableArray* mAlternateNames;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;

}
+(int)cpFontClassFromWdFontFamily:(int)arg1 ;
-(id)alternateNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(int)characterSet;
-(void)setCharacterSet:(int)arg1 ;
-(int)pitch;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(unsigned long long)hash;
-(void)setPitch:(int)arg1 ;
-(id)name;
-(id)description;
-(int)fontFamily;
-(void)setFontFamily:(int)arg1 ;
-(void)addAlternateName:(id)arg1 ;
-(id)secondName;
@end

