#ifndef VISION_VISION_PROCESS_H_
#define VISION_VISION_PROCESS_H_

#include "WPILib.h"
#include "Vision/RGBImage.h"
#include "Vision/BinaryImage.h"

/**
* @author Tom Bottglieri
*
* Abstract superclass of tasks (run on a separate thread) involving vision targets.
* Call Start() to begin the task and Stop() to terminate it.
*/
class KrakenVision {
 public:
	bool _hot;
	double _distance;
  /**
* Do not call this function externally as it's only passed to the constructor to initialize the object.
*
* This function perpetually loops, calling DoVision() if Start() has been called and Stop() hasn't.
* @param KrakenVision the given KrakenVision object to run.
*/
  static void VisionTask(KrakenVision* vp);

  /**
* Starts the task.
*/
  void Start();

  /**
* Stops the task.
*/
  void Stop();

  /**
* Sole constructor.
*/
  KrakenVision();

  /**
* Virtual destructor.
*/
  virtual ~KrakenVision();

  /**
* A task to execute perpetually when Start() is called until Stop() is
* called.
*
* Subclasses should override this function to specify their own behavior.
*/
  
 private:
  struct Scores {
  		double rectangularity;
  		double aspectRatioVertical;
  		double aspectRatioHorizontal;
  	};
  	
  	struct TargetReport {
  		int verticalIndex;
  		int horizontalIndex;
  		bool Hot;
  		double totalScore;
  		double leftScore;
  		double rightScore;
  		double tapeWidthScore;
  		double verticalScore;
  	};
  
  bool _enabled;
  Task* _task;
  Timer* _timer;
  ColorImage *image;

  
  double computeDistance (BinaryImage *image, ParticleAnalysisReport *report);
  double scoreAspectRatio(BinaryImage *image, ParticleAnalysisReport *report, bool vertical);
  bool scoreCompare(Scores scores, bool vertical);
  double scoreRectangularity(ParticleAnalysisReport *report);
  double ratioToScore(double ratio);
  bool hotOrNot(TargetReport target);
  void KrakenVision::processImage();
};

#endif // VISION_VISION_PROCESS_H_
