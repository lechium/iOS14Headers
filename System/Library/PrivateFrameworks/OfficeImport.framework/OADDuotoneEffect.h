/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect {

	OADColor* mColor1;
	OADColor* mColor2;
	int mTransferMode1;
	int mTransferMode2;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color1;
-(void)setColor1:(id)arg1 ;
-(id)color2;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setColor2:(id)arg1 ;
-(void)setTransferMode1:(int)arg1 ;
-(void)setTransferMode2:(int)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(int)transferMode1;
-(int)transferMode2;
@end

