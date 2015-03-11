/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class UITouch;

@interface RCSelectionTouchTrackingInfo : NSObject {
    double _lastLocation;
    long long _selectionAffinity;
    long long _selectionBarType;
    UITouch *_touch;
    double _trackingOffset;
}

@property long long selectionAffinity;
@property long long selectionBarType;
@property UITouch * touch;
@property double trackingOffset;

- (void).cxx_destruct;
- (id)description;
- (long long)selectionAffinity;
- (long long)selectionBarType;
- (void)setSelectionAffinity:(long long)arg1;
- (void)setSelectionBarType:(long long)arg1;
- (void)setTouch:(id)arg1;
- (void)setTrackingOffset:(double)arg1;
- (id)touch;
- (double)trackingOffset;
- (void)updateTrackingInfo;

@end