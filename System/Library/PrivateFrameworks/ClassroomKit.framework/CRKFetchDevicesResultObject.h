/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject {

	NSArray* _connectedDevices;

}

@property (nonatomic,copy) NSArray * connectedDevices;              //@synthesize connectedDevices=_connectedDevices - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)connectedDevices;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setConnectedDevices:(NSArray *)arg1 ;
@end

