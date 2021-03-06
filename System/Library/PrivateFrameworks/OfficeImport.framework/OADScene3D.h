/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {

	OADCamera* mCamera;
	OADLightRig* mLightRig;
	OADBackdrop* mBackdrop;

}
+(id)nullScene3D;
-(void)setBackdrop:(id)arg1 ;
-(void)setCamera:(id)arg1 ;
-(id)backdrop;
-(id)camera;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setLightRig:(id)arg1 ;
-(id)lightRig;
@end

