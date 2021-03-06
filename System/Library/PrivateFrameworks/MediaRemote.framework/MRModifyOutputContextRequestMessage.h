/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray;

@interface MRModifyOutputContextRequestMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned contextType; 
@property (nonatomic,readonly) NSArray * addingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * removingOutputDeviceUIDs; 
@property (nonatomic,readonly) NSArray * settingOutputDeviceUIDs; 
+(id)addDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
+(id)removeDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
+(id)setDevicesRequestMessageWithContextType:(unsigned)arg1 outputDeviceUIDs:(id)arg2 ;
-(unsigned long long)type;
-(id)initWithContextType:(unsigned)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 ;
-(NSArray *)addingOutputDeviceUIDs;
-(NSArray *)removingOutputDeviceUIDs;
-(NSArray *)settingOutputDeviceUIDs;
-(unsigned)contextType;
-(id)description;
@end

